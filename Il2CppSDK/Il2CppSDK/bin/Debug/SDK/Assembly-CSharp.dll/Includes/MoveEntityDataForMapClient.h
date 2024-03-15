#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MoveEntityDataForMapClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MoveEntityDataForMapClient"));
	}

	template <typename R = int32_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& StartId() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = Il2CppString*> R& EndId() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& Speed() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int64_t> R& ArrivalTime() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int64_t> R& Energy() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(MoveEntityDataForMapClient*, uintptr_t))(Il2CppBase() + 0x1556A40))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(MoveEntityDataForMapClient*, uintptr_t))(Il2CppBase() + 0x1556AD4))(this, reader);
	}

};

