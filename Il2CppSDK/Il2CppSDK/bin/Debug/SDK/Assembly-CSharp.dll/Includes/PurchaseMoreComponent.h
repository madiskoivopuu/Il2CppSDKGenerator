#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PurchaseMoreComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PurchaseMoreComponent"));
	}

	template <typename T = Il2CppString*> T& Description() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Values() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = bool> T Contains(Il2CppString* name) {
		return ((T (*)(PurchaseMoreComponent*, Il2CppString*))(Il2CppBase() + 0x11B9C0C))(this, name);
	}
	template <typename T = bool> T IsEmpty() {
		return ((T (*)(PurchaseMoreComponent*))(Il2CppBase() + 0x11B9D24))(this);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(PurchaseMoreComponent*, uintptr_t))(Il2CppBase() + 0x11B9D44))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(PurchaseMoreComponent*, uintptr_t))(Il2CppBase() + 0x11B9DE4))(this, writer);
	}
	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(PurchaseMoreComponent*, uintptr_t))(Il2CppBase() + 0x11B9E24))(this, targetObject);
	}

};

}
