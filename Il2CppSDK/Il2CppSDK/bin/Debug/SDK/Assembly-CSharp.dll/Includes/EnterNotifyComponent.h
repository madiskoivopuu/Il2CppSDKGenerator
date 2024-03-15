#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EnterNotifyComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnterNotifyComponent"));
	}

	template <typename R = EnterNotify*> R& OwnerNotify() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = EnterNotify*> R& ForeignNotify() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(EnterNotifyComponent*, Il2CppObject*))(Il2CppBase() + 0x13721E8))(this, targetObject);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(EnterNotifyComponent*, uintptr_t))(Il2CppBase() + 0x13722C0))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(EnterNotifyComponent*, uintptr_t))(Il2CppBase() + 0x137240C))(this, writer);
	}

};

