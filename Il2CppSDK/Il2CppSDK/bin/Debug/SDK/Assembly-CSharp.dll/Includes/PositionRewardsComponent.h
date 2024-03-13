#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PositionRewardsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PositionRewardsComponent"));
	}

	template <typename T = bool> T& ToCyclic() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& ToMain() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& List() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(PositionRewardsComponent*, Il2CppObject*))(Il2CppBase() + 0x16D57B8))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(PositionRewardsComponent*, uintptr_t))(Il2CppBase() + 0x16D5864))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(PositionRewardsComponent*, uintptr_t))(Il2CppBase() + 0x16D5A20))(this, writer);
	}

};

