#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NextPortalsPointsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NextPortalsPointsComponent"));
	}

	template <typename T = int32_t> T& Points() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& World() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(NextPortalsPointsComponent*, Il2CppObject*))(Il2CppBase() + 0x13B1C58))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(NextPortalsPointsComponent*, uintptr_t))(Il2CppBase() + 0x13B1CF4))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(NextPortalsPointsComponent*, uintptr_t))(Il2CppBase() + 0x13B1D88))(this, writer);
	}

};

