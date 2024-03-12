#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MoveEntityDataForMapClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MoveEntityDataForMapClient"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& StartId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& EndId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Speed() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int64_t> T& ArrivalTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int64_t> T& Energy() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(MoveEntityDataForMapClient*, uintptr_t))(Il2CppBase() + 0x1556A40))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(MoveEntityDataForMapClient*, uintptr_t))(Il2CppBase() + 0x1556AD4))(this, reader);
	}

};

}
