#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AcceptLobbyData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AcceptLobbyData"));
	}

	template <typename T = int64_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& Accept() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(AcceptLobbyData*, uintptr_t))(Il2CppBase() + 0x1D9681C))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(AcceptLobbyData*, uintptr_t))(Il2CppBase() + 0x1D96870))(this, reader);
	}

};

}
