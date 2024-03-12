#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseClientWorld" 

class MapClientWorld: BaseClientWorld
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapClientWorld"));
	}

	template <typename T = uintptr_t> T& map() {
		return *(T*)((uintptr_t)this + 0x298);
	}
	template <typename T = void*> T& OnEnterIntoLocation() {
		return *(T*)((uintptr_t)this + 0x2A0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& _mapCommandsActions() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_MainContext() {
		return ((T (*)(MapClientWorld*))(Il2CppBase() + 0x12691E4))(this);
	}
	template <typename T = uintptr_t> T get_map() {
		return ((T (*)(MapClientWorld*))(Il2CppBase() + 0x12691EC))(this);
	}
	template <typename T = void> T set_map(uintptr_t value) {
		return ((T (*)(MapClientWorld*, uintptr_t))(Il2CppBase() + 0x12691F4))(this, value);
	}
	template <typename T = void> T CreateContexts() {
		return ((T (*)(MapClientWorld*))(Il2CppBase() + 0x1269204))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_allContexts() {
		return ((T (*)(MapClientWorld*))(Il2CppBase() + 0x1269298))(this);
	}
	template <typename T = uintptr_t> T Create(Il2CppList<void*>* blueprints) {
		return ((T (*)(MapClientWorld*, Il2CppList<void*>*))(Il2CppBase() + 0x12694CC))(this, blueprints);
	}
	template <typename T = uintptr_t> T GetAvatarExperience() {
		return ((T (*)(MapClientWorld*))(Il2CppBase() + 0x1269528))(this);
	}
	template <typename T = bool> T OnCommand(uintptr_t commandId, uintptr_t reader, uintptr_t peer) {
		return ((T (*)(MapClientWorld*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1269D60))(this, commandId, reader, peer);
	}
	template <typename T = uintptr_t> T OnSetHealthCommand(uintptr_t data, uintptr_t peer) {
		return ((T (*)(MapClientWorld*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1269E6C))(this, data, peer);
	}
	template <typename T = uintptr_t> T OnSetTenacityCommand(uintptr_t data, uintptr_t peer) {
		return ((T (*)(MapClientWorld*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1269FE0))(this, data, peer);
	}
	template <typename T = void> T OnArming(uintptr_t data) {
		return ((T (*)(MapClientWorld*, uintptr_t))(Il2CppBase() + 0x126A0F0))(this, data);
	}
	template <typename T = void> T OnSendMoveToWorldCommand(uintptr_t data) {
		return ((T (*)(MapClientWorld*, uintptr_t))(Il2CppBase() + 0x126A1A4))(this, data);
	}
	template <typename T = uintptr_t> T OnCreateAvatarCmd(uintptr_t data) {
		return ((T (*)(MapClientWorld*, uintptr_t))(Il2CppBase() + 0x126A214))(this, data);
	}
	template <typename T = void> T ConnectToChat() {
		return ((T (*)(MapClientWorld*))(Il2CppBase() + 0x126A5CC))(this);
	}
	template <typename T = void> T OnMoveToLocation(uintptr_t data) {
		return ((T (*)(MapClientWorld*, uintptr_t))(Il2CppBase() + 0x126A654))(this, data);
	}
	template <typename T = uintptr_t> T OnCreatePoint(uintptr_t data) {
		return ((T (*)(MapClientWorld*, uintptr_t))(Il2CppBase() + 0x126A6D4))(this, data);
	}
	template <typename T = void> T OnLocationResetInfo(uintptr_t data) {
		return ((T (*)(MapClientWorld*, uintptr_t))(Il2CppBase() + 0x126A93C))(this, data);
	}
	template <typename T = void> T OnLocationResetResponse(uintptr_t data) {
		return ((T (*)(MapClientWorld*, uintptr_t))(Il2CppBase() + 0x126A99C))(this, data);
	}

};

}
