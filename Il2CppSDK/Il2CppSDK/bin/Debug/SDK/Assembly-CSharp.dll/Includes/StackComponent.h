#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StackComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StackComponent"));
	}

	template <typename T = Il2CppString*> T& Resource() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Count() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& Signature() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(StackComponent*, uintptr_t))(Il2CppBase() + 0x1488EEC))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(StackComponent*, uintptr_t))(Il2CppBase() + 0x1488F98))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(StackComponent*, uintptr_t))(Il2CppBase() + 0x1489060))(this, writer);
	}

};

}
