#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PositionRewardsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PositionRewardsComponent"));
	}

	template <typename R = bool> R& ToCyclic() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& ToMain() {
		return *(R*)((uintptr_t)this + 0x11);
	}
	template <typename R = Il2CppArray<Reward*>*> R& List() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(PositionRewardsComponent*, Il2CppObject*))(Il2CppBase() + 0x16D57B8))(this, targetObject);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(PositionRewardsComponent*, uintptr_t))(Il2CppBase() + 0x16D5864))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(PositionRewardsComponent*, uintptr_t))(Il2CppBase() + 0x16D5A20))(this, writer);
	}

};

