#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocationAutoComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationAutoComponent"));
	}

	 Il2CppDictionary<Il2CppString*, Attempt>*& Attempts() {
		return *(Il2CppDictionary<Il2CppString*, Attempt>**)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(LocationAutoComponent*, Il2CppObject*))(Il2CppBase() + 0x179C5AC))(this, targetObject);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(LocationAutoComponent*, uintptr_t))(Il2CppBase() + 0x179C644))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(LocationAutoComponent*, uintptr_t))(Il2CppBase() + 0x179C7FC))(this, writer);
	}

};

