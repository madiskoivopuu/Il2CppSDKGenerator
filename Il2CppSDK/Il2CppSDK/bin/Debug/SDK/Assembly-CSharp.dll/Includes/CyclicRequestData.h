#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CyclicRequestData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CyclicRequestData"));
	}

	template <typename T = uintptr_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& DeviceID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& GoogleID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& GameCenterID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& HuaweyID() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& FirebaseID() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(CyclicRequestData*, uintptr_t))(Il2CppBase() + 0x1645B44))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(CyclicRequestData*, uintptr_t))(Il2CppBase() + 0x1645BD8))(this, reader);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(CyclicRequestData*))(Il2CppBase() + 0x1645D98))(this);
	}

};

}
