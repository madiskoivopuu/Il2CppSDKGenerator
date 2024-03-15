#pragma once
#include <Il2Cpp/Il2Cpp.h>

class KefirIdComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KefirIdComponent"));
	}

	template <typename R = Il2CppString*> R& KefirId() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(KefirIdComponent*, Il2CppObject*))(Il2CppBase() + 0x14E9D64))(this, targetObject);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(KefirIdComponent*, uintptr_t))(Il2CppBase() + 0x14E9DFC))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(KefirIdComponent*, uintptr_t))(Il2CppBase() + 0x14E9E68))(this, writer);
	}

};

