#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocationGradeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationGradeComponent"));
	}

	 Il2CppDictionary<Il2CppString*, int32_t>*& Locations() {
		return *(Il2CppDictionary<Il2CppString*, int32_t>**)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(LocationGradeComponent*, Il2CppObject*))(Il2CppBase() + 0x17B2170))(this, targetObject);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(LocationGradeComponent*, uintptr_t))(Il2CppBase() + 0x17B2208))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(LocationGradeComponent*, uintptr_t))(Il2CppBase() + 0x17B23A4))(this, writer);
	}

};

