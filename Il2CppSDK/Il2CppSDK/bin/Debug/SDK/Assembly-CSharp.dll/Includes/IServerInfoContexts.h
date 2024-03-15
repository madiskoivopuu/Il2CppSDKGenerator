#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IServerInfoContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IServerInfoContexts"));
	}


	template <typename R = ServerInfoContext*> R get_serverInfo() {
		return ((R (*)(IServerInfoContexts*))(Il2CppBase() + 0x0))(this);
	}

};

