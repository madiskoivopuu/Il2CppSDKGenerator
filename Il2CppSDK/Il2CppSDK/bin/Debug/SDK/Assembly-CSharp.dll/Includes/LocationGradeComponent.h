#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocationGradeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationGradeComponent"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> T& Locations() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(LocationGradeComponent*, Il2CppObject*))(Il2CppBase() + 0x17B2170))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(LocationGradeComponent*, uintptr_t))(Il2CppBase() + 0x17B2208))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(LocationGradeComponent*, uintptr_t))(Il2CppBase() + 0x17B23A4))(this, writer);
	}

};

