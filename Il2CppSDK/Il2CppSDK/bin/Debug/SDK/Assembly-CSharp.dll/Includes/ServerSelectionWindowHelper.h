#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ServerSelectionWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ServerSelectionWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowServerSelection(uintptr_t manager, uintptr_t serverInfoContext, uintptr_t viewMode, void* onChangeServer) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, void*))(Il2CppBase() + 0x1622B20))(0, manager, serverInfoContext, viewMode, onChangeServer);
	}

};

}
