#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseClientWorld.h" 

class MapClientWorld : public BaseClientWorld
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapClientWorld"));
	}

	template <typename R = GameContext*> R& map() {
		return *(R*)((uintptr_t)this + 0x298);
	}
	 Action1<Il2CppString*>*& OnEnterIntoLocation() {
		return *(Action1<Il2CppString*>**)((uintptr_t)this + 0x2A0);
	}
	template <typename R = Il2CppArray<Action4<MapClientWorld*, Commands, uintptr_t, uintptr_t>*>*> static R& _mapCommandsActions() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = GameContext*> R get_MainContext() {
		return ((R (*)(MapClientWorld*))(Il2CppBase() + 0x12691E4))(this);
	}
	template <typename R = GameContext*> R get_map() {
		return ((R (*)(MapClientWorld*))(Il2CppBase() + 0x12691EC))(this);
	}
	template <typename R = void> R set_map(GameContext* value) {
		return ((R (*)(MapClientWorld*, GameContext*))(Il2CppBase() + 0x12691F4))(this, value);
	}
	template <typename R = void> R CreateContexts() {
		return ((R (*)(MapClientWorld*))(Il2CppBase() + 0x1269204))(this);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R get_allContexts() {
		return ((R (*)(MapClientWorld*))(Il2CppBase() + 0x1269298))(this);
	}
	template <typename R = uintptr_t> R Create(Il2CppList<KeyValuePair2<Il2CppString*, EntityBlueprint*>*>* blueprints) {
		return ((R (*)(MapClientWorld*, Il2CppList<KeyValuePair2<Il2CppString*, EntityBlueprint*>*>*))(Il2CppBase() + 0x12694CC))(this, blueprints);
	}
	template <typename R = GameEntity*> R GetAvatarExperience() {
		return ((R (*)(MapClientWorld*))(Il2CppBase() + 0x1269528))(this);
	}
	template <typename R = bool> R OnCommand(Commands commandId, uintptr_t reader, uintptr_t peer) {
		return ((R (*)(MapClientWorld*, Commands, uintptr_t, uintptr_t))(Il2CppBase() + 0x1269D60))(this, commandId, reader, peer);
	}
	template <typename R = GameEntity*> R OnSetHealthCommand(SetHealthData data, uintptr_t peer) {
		return ((R (*)(MapClientWorld*, SetHealthData, uintptr_t))(Il2CppBase() + 0x1269E6C))(this, data, peer);
	}
	template <typename R = GameEntity*> R OnSetTenacityCommand(SetTenacityData data, uintptr_t peer) {
		return ((R (*)(MapClientWorld*, SetTenacityData, uintptr_t))(Il2CppBase() + 0x1269FE0))(this, data, peer);
	}
	template <typename R = void> R OnArming(ArmingData data) {
		return ((R (*)(MapClientWorld*, ArmingData))(Il2CppBase() + 0x126A0F0))(this, data);
	}
	template <typename R = void> R OnSendMoveToWorldCommand(SendMoveToWorldData data) {
		return ((R (*)(MapClientWorld*, SendMoveToWorldData))(Il2CppBase() + 0x126A1A4))(this, data);
	}
	template <typename R = GameEntity*> R OnCreateAvatarCmd(CreateMapAvatarEntityData data) {
		return ((R (*)(MapClientWorld*, CreateMapAvatarEntityData))(Il2CppBase() + 0x126A214))(this, data);
	}
	template <typename R = void> R ConnectToChat() {
		return ((R (*)(MapClientWorld*))(Il2CppBase() + 0x126A5CC))(this);
	}
	template <typename R = void> R OnMoveToLocation(MoveEntityDataForMapClient data) {
		return ((R (*)(MapClientWorld*, MoveEntityDataForMapClient))(Il2CppBase() + 0x126A654))(this, data);
	}
	template <typename R = GameEntity*> R OnCreatePoint(CreatePointData data) {
		return ((R (*)(MapClientWorld*, CreatePointData))(Il2CppBase() + 0x126A6D4))(this, data);
	}
	template <typename R = void> R OnLocationResetInfo(LocationResetInfoData* data) {
		return ((R (*)(MapClientWorld*, LocationResetInfoData*))(Il2CppBase() + 0x126A93C))(this, data);
	}
	template <typename R = void> R OnLocationResetResponse(LocationResetResponseData* data) {
		return ((R (*)(MapClientWorld*, LocationResetResponseData*))(Il2CppBase() + 0x126A99C))(this, data);
	}

};

