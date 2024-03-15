#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseLoaderStep.h" 

class BaseWorldInitLS : public BaseLoaderStep
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseWorldInitLS"));
	}

	template <typename R = Il2CppString*> static R& GlobalMapName() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = UdpClientConfig*> R& _udpConfig() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = int64_t> R& _userID() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = int64_t> R& _sessionID() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = int64_t> R& _worldID() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = Il2CppString*> R& _sceneName() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = bool> R& _skipThisStep() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = ProtoModels::WorldResourcesType> R& _resourcesType() {
		return *(R*)((uintptr_t)this + 0xCC);
	}
	template <typename R = ClientDataContexts*> R& _dataContexts() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = ClientSharedContexts*> R& _sharedContexts() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = UdpClientListener*> R& _listener() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = ClientTimeManager*> R& _timeManager() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	template <typename R = IRandomManager*> R& _randomManager() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	template <typename R = ClientIdManager*> R& _idManager() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = ChatManager*> R& _chatManager() {
		return *(R*)((uintptr_t)this + 0x100);
	}
	template <typename R = uintptr_t> R& _onStateEnteredAction() {
		return *(R*)((uintptr_t)this + 0x108);
	}
	template <typename R = Il2CppString*> R& _stepLogName() {
		return *(R*)((uintptr_t)this + 0x110);
	}
	 Il2CppList<KeyValuePair2<Il2CppString*, EntityBlueprint*>*>*& _blueprints() {
		return *(Il2CppList<KeyValuePair2<Il2CppString*, EntityBlueprint*>*>**)((uintptr_t)this + 0x118);
	}
	template <typename R = IAssetPackBatchRequest*> R& _staticBundleRequest() {
		return *(R*)((uintptr_t)this + 0x120);
	}
	template <typename R = IAssetPackBatchRequest*> R& _bundleRequest() {
		return *(R*)((uintptr_t)this + 0x128);
	}
	template <typename R = bool> R& _updateListenerRemoved() {
		return *(R*)((uintptr_t)this + 0x130);
	}
	template <typename R = bool> R& _isDisconnected() {
		return *(R*)((uintptr_t)this + 0x131);
	}
	template <typename R = float> R& _timeToRepeat() {
		return *(R*)((uintptr_t)this + 0x134);
	}
	template <typename R = bool> R& _isArenaLeaving() {
		return *(R*)((uintptr_t)this + 0x138);
	}
	template <typename R = uintptr_t> R& _progressCrt() {
		return *(R*)((uintptr_t)this + 0x140);
	}

	template <typename R = void> R Disable() {
		return ((R (*)(BaseWorldInitLS*))(Il2CppBase() + 0x1671FF8))(this);
	}
	template <typename R = void> R StartLoadingFromStep() {
		return ((R (*)(BaseWorldInitLS*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R CheckIsWorldNotEmpty(BaseClientWorld* World) {
		return ((R (*)(BaseWorldInitLS*, BaseClientWorld*))(Il2CppBase() + 0x16720E8))(this, World);
	}
	template <typename R = void> R OnConnectedToCoordinator(bool connectToGlobalMap, UdpClientConfig* udpConfig, int64_t userID, int64_t sessionID, int64_t worldID, Il2CppString* sceneName, ProtoModels::WorldResourcesType resourcesType) {
		return ((R (*)(BaseWorldInitLS*, bool, UdpClientConfig*, int64_t, int64_t, int64_t, Il2CppString*, ProtoModels::WorldResourcesType))(Il2CppBase() + 0x16724B4))(this, connectToGlobalMap, udpConfig, userID, sessionID, worldID, sceneName, resourcesType);
	}
	template <typename R = void> R InitManagers() {
		return ((R (*)(BaseWorldInitLS*))(Il2CppBase() + 0x1672538))(this);
	}
	template <typename R = void> R AddUpdateListener() {
		return ((R (*)(BaseWorldInitLS*))(Il2CppBase() + 0x1672700))(this);
	}
	template <typename R = void> R RemoveUpdateListener() {
		return ((R (*)(BaseWorldInitLS*))(Il2CppBase() + 0x16727A8))(this);
	}
	template <typename R = void> R OnUpdate(float deltaTime) {
		return ((R (*)(BaseWorldInitLS*, float))(Il2CppBase() + 0x0))(this, deltaTime);
	}
	template <typename R = void> R Clean() {
		return ((R (*)(BaseWorldInitLS*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R OnDisconnectHandler(uintptr_t reason) {
		return ((R (*)(BaseWorldInitLS*, uintptr_t))(Il2CppBase() + 0x1672854))(this, reason);
	}
	template <typename R = void> R CheckToRepeatAfterFail(Il2CppString* reasonForAnalytics) {
		return ((R (*)(BaseWorldInitLS*, Il2CppString*))(Il2CppBase() + 0x1673218))(this, reasonForAnalytics);
	}
	template <typename R = void> R CheckForReloginTimeout(float deltaTime) {
		return ((R (*)(BaseWorldInitLS*, float))(Il2CppBase() + 0x1673344))(this, deltaTime);
	}
	template <typename R = uintptr_t> R SceneLoad(BaseClientWorld* world) {
		return ((R (*)(BaseWorldInitLS*, BaseClientWorld*))(Il2CppBase() + 0x1673534))(this, world);
	}
	template <typename R = uintptr_t> R LoadAssetBundle(BaseClientWorld* world) {
		return ((R (*)(BaseWorldInitLS*, BaseClientWorld*))(Il2CppBase() + 0x16735C8))(this, world);
	}
	template <typename R = void> R OnAssetBundleError() {
		return ((R (*)(BaseWorldInitLS*))(Il2CppBase() + 0x167365C))(this);
	}
	template <typename R = void> R OnDisconnectHandlerb__36_0(int32_t result) {
		return ((R (*)(BaseWorldInitLS*, int32_t))(Il2CppBase() + 0x16736DC))(this, result);
	}
	template <typename R = void> R OnDisconnectHandlerb__36_1(int32_t result) {
		return ((R (*)(BaseWorldInitLS*, int32_t))(Il2CppBase() + 0x1673838))(this, result);
	}

};

