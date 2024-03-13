#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PersonalKeyComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PersonalKeyComponent"));
	}

	template <typename T = Il2CppString*> T& Value() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& SaveInLocation() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& SaveForOneVersion() {
		return *(T*)((uintptr_t)this + 0x19);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(PersonalKeyComponent*, Il2CppObject*))(Il2CppBase() + 0x11EB254))(this, target);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(PersonalKeyComponent*, uintptr_t))(Il2CppBase() + 0x11EB300))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(PersonalKeyComponent*, uintptr_t))(Il2CppBase() + 0x11EB3C8))(this, writer);
	}

};

