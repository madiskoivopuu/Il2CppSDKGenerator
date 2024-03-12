#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GeneratedPositionRewardsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GeneratedPositionRewardsComponent"));
	}

	template <typename T = Il2CppDictionary<int32_t, Il2CppArray<uintptr_t>*>*> T& Datas() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(GeneratedPositionRewardsComponent*, uintptr_t))(Il2CppBase() + 0x176EFF8))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(GeneratedPositionRewardsComponent*, uintptr_t))(Il2CppBase() + 0x176F090))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(GeneratedPositionRewardsComponent*, uintptr_t))(Il2CppBase() + 0x176F4D4))(this, writer);
	}
	template <typename T = void> T writeData(uintptr_t writer, void* kvp) {
		return ((T (*)(GeneratedPositionRewardsComponent*, uintptr_t, void*))(Il2CppBase() + 0x176F644))(this, writer, kvp);
	}
	template <typename T = void*> T readData(uintptr_t reader) {
		return ((T (*)(GeneratedPositionRewardsComponent*, uintptr_t))(Il2CppBase() + 0x176F20C))(this, reader);
	}

};

}
