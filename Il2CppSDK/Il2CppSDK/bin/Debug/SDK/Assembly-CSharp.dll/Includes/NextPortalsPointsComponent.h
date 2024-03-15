#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NextPortalsPointsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NextPortalsPointsComponent"));
	}

	template <typename R = int32_t> R& Points() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& World() {
		return *(R*)((uintptr_t)this + 0x14);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(NextPortalsPointsComponent*, Il2CppObject*))(Il2CppBase() + 0x13B1C58))(this, targetObject);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(NextPortalsPointsComponent*, uintptr_t))(Il2CppBase() + 0x13B1CF4))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(NextPortalsPointsComponent*, uintptr_t))(Il2CppBase() + 0x13B1D88))(this, writer);
	}

};

