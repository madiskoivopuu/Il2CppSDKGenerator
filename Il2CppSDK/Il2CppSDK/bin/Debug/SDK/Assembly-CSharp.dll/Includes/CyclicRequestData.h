#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CyclicRequestData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CyclicRequestData"));
	}

	template <typename R = RequestType*> R& Type() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& DeviceID() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = Il2CppString*> R& GoogleID() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& GameCenterID() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& HuaweyID() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& FirebaseID() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(CyclicRequestData*, uintptr_t))(Il2CppBase() + 0x1645B44))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(CyclicRequestData*, uintptr_t))(Il2CppBase() + 0x1645BD8))(this, reader);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(CyclicRequestData*))(Il2CppBase() + 0x1645D98))(this);
	}

};

