#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RuneSlotKey
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RuneSlotKey"));
	}

	template <typename R = PlayerClassType*> R& ClassType() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& Index() {
		return *(R*)((uintptr_t)this + 0x4);
	}

	template <typename R = bool> R Equals(RuneSlotKey* other) {
		return ((R (*)(RuneSlotKey*, RuneSlotKey*))(Il2CppBase() + 0x111BEB4))(this, other);
	}
	template <typename R = bool> R Equals_1(Il2CppObject* obj) {
		return ((R (*)(RuneSlotKey*, Il2CppObject*))(Il2CppBase() + 0x111BEDC))(this, obj);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(RuneSlotKey*))(Il2CppBase() + 0x111BF70))(this);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(RuneSlotKey*, uintptr_t))(Il2CppBase() + 0x111BFA8))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(RuneSlotKey*, uintptr_t))(Il2CppBase() + 0x111C05C))(this, writer);
	}

};

