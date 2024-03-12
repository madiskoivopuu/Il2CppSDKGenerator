#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OpenWindowData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OpenWindowData"));
	}

	template <typename T = int32_t> T& TargetId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& Arg() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& ItemName() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(OpenWindowData*, uintptr_t))(Il2CppBase() + 0x11E3EDC))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(OpenWindowData*, uintptr_t))(Il2CppBase() + 0x11E3F50))(this, reader);
	}

};

}
