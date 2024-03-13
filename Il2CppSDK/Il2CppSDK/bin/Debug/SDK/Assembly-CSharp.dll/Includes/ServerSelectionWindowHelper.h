#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ServerSelectionWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ServerSelectionWindowHelper"));
	}


	template <typename T = ServerSelectionWindow*> static T ShowServerSelection(UIWindowsManager* manager, ServerInfoContext* serverInfoContext, ServerSelectionWindowMode* viewMode, Action1Il2CppString*>* onChangeServer) {
		return ((T (*)(void *, UIWindowsManager*, ServerInfoContext*, ServerSelectionWindowMode*, Action1Il2CppString*>*))(Il2CppBase() + 0x1622B20))(0, manager, serverInfoContext, viewMode, onChangeServer);
	}

};

