#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MultiplierTagsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MultiplierTagsComponent"));
	}

	template <typename R = float> R& Value() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& Range() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = Il2CppArray<float>*> R& CoefByGrade() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppArray<TagValue>*> R& Items() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(MultiplierTagsComponent*, Il2CppObject*))(Il2CppBase() + 0x1558488))(this, target);
	}

};

