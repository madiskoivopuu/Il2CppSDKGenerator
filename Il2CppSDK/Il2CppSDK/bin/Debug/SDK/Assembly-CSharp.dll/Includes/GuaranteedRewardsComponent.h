#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuaranteedRewardsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuaranteedRewardsComponent"));
	}

	template <typename R = bool> R& ToCyclic() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& ToMain() {
		return *(R*)((uintptr_t)this + 0x11);
	}
	template <typename R = Il2CppArray<Reward>*> R& List() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(GuaranteedRewardsComponent*, Il2CppObject*))(Il2CppBase() + 0x12E372C))(this, targetObject);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(GuaranteedRewardsComponent*, uintptr_t))(Il2CppBase() + 0x12E37D8))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(GuaranteedRewardsComponent*, uintptr_t))(Il2CppBase() + 0x12E3994))(this, writer);
	}

};

