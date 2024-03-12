#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RuneSlotKey
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RuneSlotKey"));
	}

	template <typename T = uintptr_t> T& ClassType() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& Index() {
		return *(T*)((uintptr_t)this + 0x4);
	}

	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(RuneSlotKey*, uintptr_t))(Il2CppBase() + 0x111BEB4))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t obj) {
		return ((T (*)(RuneSlotKey*, uintptr_t))(Il2CppBase() + 0x111BEDC))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(RuneSlotKey*))(Il2CppBase() + 0x111BF70))(this);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(RuneSlotKey*, uintptr_t))(Il2CppBase() + 0x111BFA8))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(RuneSlotKey*, uintptr_t))(Il2CppBase() + 0x111C05C))(this, writer);
	}

};

}
