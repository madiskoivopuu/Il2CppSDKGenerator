#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FirstTimeEventsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FirstTimeEventsComponent"));
	}

	template <typename T = bool> T& GlobalMapEntered() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(FirstTimeEventsComponent*, Il2CppObject*))(Il2CppBase() + 0x16995E4))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(FirstTimeEventsComponent*, uintptr_t))(Il2CppBase() + 0x1699678))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(FirstTimeEventsComponent*, uintptr_t))(Il2CppBase() + 0x16996E4))(this, writer);
	}

};

