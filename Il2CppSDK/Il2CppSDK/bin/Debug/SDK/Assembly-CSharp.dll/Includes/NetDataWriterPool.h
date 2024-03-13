#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NetDataWriterPool
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NetDataWriterPool"));
	}

	template <typename T = int32_t> static T& MAX_SIZE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& _sharedBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& _count() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> static T Get() {
		return ((T (*)(void *))(Il2CppBase() + 0x13AB5C4))(0);
	}
	template <typename T = void> static T Release(uintptr_t writer) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x13AB808))(0, writer);
	}

};

