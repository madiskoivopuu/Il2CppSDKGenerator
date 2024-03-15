#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FirstTimeEventsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FirstTimeEventsComponent"));
	}

	template <typename R = bool> R& GlobalMapEntered() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(FirstTimeEventsComponent*, Il2CppObject*))(Il2CppBase() + 0x16995E4))(this, targetObject);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(FirstTimeEventsComponent*, uintptr_t))(Il2CppBase() + 0x1699678))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(FirstTimeEventsComponent*, uintptr_t))(Il2CppBase() + 0x16996E4))(this, writer);
	}

};

