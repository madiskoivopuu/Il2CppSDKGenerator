#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GradeUpView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GradeUpView"));
	}

	template <typename R = uintptr_t> R& RectTransform() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& Caption() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = uintptr_t> R& Description() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 Il2CppList<uintptr_t>*& Conditions() {
		return *(Il2CppList<uintptr_t>**)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& NeededResources() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& ResourcesContainer() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	 Il2CppList<RewardResourceView*>*& Resources() {
		return *(Il2CppList<RewardResourceView*>**)((uintptr_t)this + 0x30);
	}


};

