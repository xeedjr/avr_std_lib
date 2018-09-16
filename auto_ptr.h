/**
 * @file	autoptr.h
 * @author	boy
 * @version 
 * @date	13 дек. 2014 г.
 * @brief
 */
#ifndef INCLUDE_STL_AUTO_PTR_H_
#define INCLUDE_STL_AUTO_PTR_H_

#include "terminate.h"

namespace std {

template<typename T>
class auto_ptr {
public:
	auto_ptr() {};
	~auto_ptr() {
		if (M_ptr_ != nullptr)
			delete M_ptr_;
	};

	T& operator*()  const  {
		if (M_ptr_ == nullptr)
			terminate();
		return *M_ptr_;
	}
	T* operator->(void) {
		if (M_ptr_ == nullptr)
			terminate();
		return M_ptr_;
	};
	auto_ptr& operator=(auto_ptr& right) {
		if (M_ptr_ != nullptr)
			delete M_ptr_;
		M_ptr_ = right.M_ptr_;
		right.M_ptr_ = nullptr;

		return *this;
	};
	bool operator==(const auto_ptr& right) {
		if (right.M_ptr_ == M_ptr_)
			return true;
		else
			return false;
	};
	operator bool() const {
		if (M_ptr_ == nullptr)
			return false;
		else
			return true;
	};

	void reset (void) {
		if (M_ptr_ != nullptr)
			delete M_ptr_;
	};
	void reset(T* ptr) {
		if (M_ptr_ != nullptr)
			delete M_ptr_;
		M_ptr_ = ptr;
	};

private:
	T* M_ptr_ = nullptr;
};

} /* namespace std */

#endif /* INCLUDE_STL_AUTO_PTR_H_ */
