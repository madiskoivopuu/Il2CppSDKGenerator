#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ServerSelectionWindowContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ServerSelectionWindowContext"));
	}

	template <typename R = ServerInfoContext*> R& ServerInfo() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = ServerSelectionWindowMode> R& ViewMode() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	 Action1<Il2CppString*>*& OnChangeServer() {
		return *(Action1<Il2CppString*>**)((uintptr_t)this + 0x20);
	}

	template <typename R = UIWindowType> R get_WindowType() {
		return ((R (*)(ServerSelectionWindowContext*))(Il2CppBase() + 0x10CA008))(this);
	}
	template <typename R = UIWindowsLayerType> R get_LayerType() {
		return ((R (*)(ServerSelectionWindowContext*))(Il2CppBase() + 0x10CA010))(this);
	}
	template <typename R = ServerInfoContext*> R get_ServerInfo() {
		return ((R (*)(ServerSelectionWindowContext*))(Il2CppBase() + 0x10CA018))(this);
	}
	template <typename R = ServerSelectionWindowMode> R get_ViewMode() {
		return ((R (*)(ServerSelectionWindowContext*))(Il2CppBase() + 0x10CA020))(this);
	}
	 Action1<Il2CppString*>* get_OnChangeServer() {
		return ((Action1<Il2CppString*>* (*)(ServerSelectionWindowContext*))(Il2CppBase() + 0x10CA028))(this);
	}

};

