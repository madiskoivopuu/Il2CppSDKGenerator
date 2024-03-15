#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseNotifyComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseNotifyComponent"));
	}

	template <typename R = NotifyType*> R& Type() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Icon() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& Caption() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& Text() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppString*> R& Sound() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(BaseNotifyComponent*, Il2CppObject*))(Il2CppBase() + 0x166F774))(this, target);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(BaseNotifyComponent*, uintptr_t))(Il2CppBase() + 0x166F844))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(BaseNotifyComponent*, uintptr_t))(Il2CppBase() + 0x166F8B8))(this, reader);
	}

};

