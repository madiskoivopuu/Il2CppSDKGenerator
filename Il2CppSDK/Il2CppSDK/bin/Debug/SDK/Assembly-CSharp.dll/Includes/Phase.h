#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Phase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Phase"));
	}

	template <typename R = float> R& Duration() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Magic() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& InitMagic() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& Color() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = bool> R& Available() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = bool> R& Notify() {
		return *(R*)((uintptr_t)this + 0x31);
	}
	template <typename R = float> R& NotifyBeforeEnable() {
		return *(R*)((uintptr_t)this + 0x34);
	}
	template <typename R = Il2CppString*> R& NotifyBeforeCaption() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = Il2CppString*> R& NotifyCaption() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = Il2CppString*> R& NotifyBeforeText() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = Il2CppString*> R& NotifyText() {
		return *(R*)((uintptr_t)this + 0x50);
	}

	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(Phase*, uintptr_t))(Il2CppBase() + 0x10AF934))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(Phase*, uintptr_t))(Il2CppBase() + 0x10AFB5C))(this, writer);
	}

};

