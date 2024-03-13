#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IServerInfoContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IServerInfoContexts"));
	}


	template <typename T = ServerInfoContext*> T get_serverInfo() {
		return ((T (*)(IServerInfoContexts*))(Il2CppBase() + 0x0))(this);
	}

};

