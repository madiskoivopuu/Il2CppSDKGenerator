#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TypeVector3Component1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TypeVector3Component`1"));
	}

	template <typename T = uintptr_t> T& X() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& Y() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& Z() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(TypeVector3Component1*, uintptr_t))(Il2CppBase() + 0x0))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(TypeVector3Component1*, uintptr_t))(Il2CppBase() + 0x0))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(TypeVector3Component1*, uintptr_t))(Il2CppBase() + 0x0))(this, writer);
	}

};

}
