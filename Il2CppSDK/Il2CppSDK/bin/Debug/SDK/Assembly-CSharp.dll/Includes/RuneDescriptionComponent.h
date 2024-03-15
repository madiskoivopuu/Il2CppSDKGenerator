#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RuneDescriptionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RuneDescriptionComponent"));
	}

	template <typename R = Il2CppString*> R& MagicName() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& ParamsDescription() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppArray<Params*>*> R& ParamsByGrade() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = Params*> R GetParams(int32_t grade) {
		return ((R (*)(RuneDescriptionComponent*, int32_t))(Il2CppBase() + 0x11A9B64))(this, grade);
	}
	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(RuneDescriptionComponent*, Il2CppObject*))(Il2CppBase() + 0x11A9E9C))(this, target);
	}

};

