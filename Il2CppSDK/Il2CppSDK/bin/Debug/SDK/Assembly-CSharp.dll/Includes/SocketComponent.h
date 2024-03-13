#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SocketComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SocketComponent"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& IgnoreRotation() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(SocketComponent*, Il2CppObject*))(Il2CppBase() + 0x1484A6C))(this, targetObject);
	}

};

