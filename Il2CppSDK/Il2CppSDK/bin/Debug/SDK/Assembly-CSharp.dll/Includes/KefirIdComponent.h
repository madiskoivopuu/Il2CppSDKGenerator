#pragma once
#include <Il2Cpp/Il2Cpp.h>

class KefirIdComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KefirIdComponent"));
	}

	template <typename T = Il2CppString*> T& KefirId() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(KefirIdComponent*, uintptr_t))(Il2CppBase() + 0x14E9D64))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(KefirIdComponent*, uintptr_t))(Il2CppBase() + 0x14E9DFC))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(KefirIdComponent*, uintptr_t))(Il2CppBase() + 0x14E9E68))(this, writer);
	}

};

}
