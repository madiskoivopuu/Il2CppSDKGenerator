#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MapPathComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapPathComponent"));
	}

	template <typename R = Il2CppString*> R& StartId() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& EndId() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(MapPathComponent*, Il2CppObject*))(Il2CppBase() + 0x12BEBC0))(this, targetObject);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(MapPathComponent*, uintptr_t))(Il2CppBase() + 0x12BEC68))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(MapPathComponent*, uintptr_t))(Il2CppBase() + 0x12BECA8))(this, reader);
	}

};

