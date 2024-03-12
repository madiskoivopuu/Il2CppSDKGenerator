#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IReadWrite
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IReadWrite"));
	}


	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(IReadWrite*, uintptr_t))(Il2CppBase() + 0x0))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(IReadWrite*, uintptr_t))(Il2CppBase() + 0x0))(this, writer);
	}

};

}
