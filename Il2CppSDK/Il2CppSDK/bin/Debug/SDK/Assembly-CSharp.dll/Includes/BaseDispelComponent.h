#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseDispelComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseDispelComponent"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& Names() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& Tag() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& AnyTags() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = bool> R& Buffs() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = bool> R& ByActor() {
		return *(R*)((uintptr_t)this + 0x31);
	}
	template <typename R = bool> R& Controls() {
		return *(R*)((uintptr_t)this + 0x32);
	}
	template <typename R = int32_t> R& MaxCount() {
		return *(R*)((uintptr_t)this + 0x34);
	}
	template <typename R = Il2CppString*> R& SuccessEffect() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(BaseDispelComponent*, Il2CppObject*))(Il2CppBase() + 0x166CDC8))(this, target);
	}

};

