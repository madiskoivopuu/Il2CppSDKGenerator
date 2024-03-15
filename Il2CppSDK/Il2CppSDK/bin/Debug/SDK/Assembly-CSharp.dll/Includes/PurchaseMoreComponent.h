#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PurchaseMoreComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PurchaseMoreComponent"));
	}

	template <typename R = Il2CppString*> R& Description() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& Values() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = bool> R Contains(Il2CppString* name) {
		return ((R (*)(PurchaseMoreComponent*, Il2CppString*))(Il2CppBase() + 0x11B9C0C))(this, name);
	}
	template <typename R = bool> R IsEmpty() {
		return ((R (*)(PurchaseMoreComponent*))(Il2CppBase() + 0x11B9D24))(this);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(PurchaseMoreComponent*, uintptr_t))(Il2CppBase() + 0x11B9D44))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(PurchaseMoreComponent*, uintptr_t))(Il2CppBase() + 0x11B9DE4))(this, writer);
	}
	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(PurchaseMoreComponent*, Il2CppObject*))(Il2CppBase() + 0x11B9E24))(this, targetObject);
	}

};

