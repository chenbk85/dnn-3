#pragma once

#include <vector>
#include <numeric>
#include <random>
#include <math.h>
#include <stdio.h>

typedef std::vector<float> Vector;

namespace v{
	struct LightVector: public std::pair<float*,float*>
	{
		//using Parent=std::pair<float*,float*>;
		//template <typename... Arg> LightVector(Arg&& ... arg): std::pair<float*,float*>(std::forward<Arg>(arg)...){}
		LightVector(){}
		LightVector(float* fir,float* sec):std::pair<float*,float*>(fir,sec){}
		float* data() const {return first;}
		size_t size() const {return std::distance(first,second);}
		bool empty() const {return first==second;}
		float& operator[](size_t i){return *(first+i);}
		float operator[](size_t i) const {return *(first+i);}
	};

	template <class Vector1,class Vector2> 
	inline float dot(const Vector1& x,const Vector2& y)
	{
		int m=x.size();const float* xd=x.data();const float *yd=y.data();
		float sum=0.0;
		while(--m>=0) sum+=(*xd++)*(*yd++);
		return sum;
	}

	inline void saxpy(Vector& x,float g,const Vector& y)
	{
		int m=x.size();
		float* xd=x.data();
		const float* yd=y.data();
		while (--m>=0) (*xd++)+=g*(*yd++);
	}
	inline void saxpy(float a,Vector& x,float g,const Vector& y){
		int m=x.size();float* xd=x.data(); const float *yd=y.data();

		while (--m>=0)
			(*xd)=a*(*xd++)+g*(*yd++);

		
	}
	inline void saxpy2(Vector& x,float g, const Vector& y,float h,const Vector& z)
	{
		int m=x.size();float* xd=x.data(); const float *yd=y.data();const float* zd=z.data();
		while(--m>=0)
			(*xd++)=(g*(*yd++)+h*(*zd++));
	}
	inline void scale(Vector& x,float g)
	{
		int m=x.size();float* xd=x.data();
		while (--m>=0) (*xd++)*=g;
	}

	inline void unit(Vector& x)
	{
		float len=::sqrt(dot(x,x));
		if (len==0) return;
		int m=x.size();float* xd=x.data();
		while (--m>=0) (*xd++)/=len;
			
	}
	template<typename T> bool isfinite(T arg)
	{
		return arg == arg && 
			   arg != std::numeric_limits<T>::infinity() &&
			   arg != -std::numeric_limits<T>::infinity();
	}
	inline bool isfinite(const Vector& x)
	{
		for(const auto& i:x) 
			if(!isfinite(i)) return false;

		return true;
	}
}