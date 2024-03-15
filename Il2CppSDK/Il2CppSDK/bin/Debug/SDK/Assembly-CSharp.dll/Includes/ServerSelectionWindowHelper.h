#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ServerSelectionWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ServerSelectionWindowHelper"));
	}


	template <typename R = ServerSelectionWindow*> static R ShowServerSelection(UIWindowsManager* manager, ServerInfoContext* serverInfoContext, ServerSelectionWindowMode* viewMode, Action1Il2CppString*>* onChangeServer) {
		return ((R (*)(void *, UIWindowsManager*, ServerInfoContext*, ServerSelectionWindowMode*, Action1Il2CppString*>*))(Il2CppBase() + 0x1622B20))(0, manager, serverInfoContext, viewMode, onChangeServer);
	}

};

