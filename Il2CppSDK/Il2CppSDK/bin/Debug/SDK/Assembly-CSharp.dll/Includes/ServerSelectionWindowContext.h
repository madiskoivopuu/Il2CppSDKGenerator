#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ServerSelectionWindowContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ServerSelectionWindowContext"));
	}

	template <typename T = uintptr_t> T& ServerInfo() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& ViewMode() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& OnChangeServer() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uintptr_t> T get_WindowType() {
		return ((T (*)(ServerSelectionWindowContext*))(Il2CppBase() + 0x10CA008))(this);
	}
	template <typename T = uintptr_t> T get_LayerType() {
		return ((T (*)(ServerSelectionWindowContext*))(Il2CppBase() + 0x10CA010))(this);
	}
	template <typename T = uintptr_t> T get_ServerInfo() {
		return ((T (*)(ServerSelectionWindowContext*))(Il2CppBase() + 0x10CA018))(this);
	}
	template <typename T = uintptr_t> T get_ViewMode() {
		return ((T (*)(ServerSelectionWindowContext*))(Il2CppBase() + 0x10CA020))(this);
	}
	template <typename T = void*> T get_OnChangeServer() {
		return ((T (*)(ServerSelectionWindowContext*))(Il2CppBase() + 0x10CA028))(this);
	}

};

}
