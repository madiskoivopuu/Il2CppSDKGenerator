#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseLoaderStep.h" 

class BaseWorldInitLS : public BaseLoaderStep
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseWorldInitLS"));
	}

	template <typename T = Il2CppString*> static T& GlobalMapName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = UdpClientConfig*> T& _udpConfig() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int64_t> T& _userID() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int64_t> T& _sessionID() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int64_t> T& _worldID() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppString*> T& _sceneName() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = bool> T& _skipThisStep() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = WorldResourcesType*> T& _resourcesType() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = ClientDataContexts*> T& _dataContexts() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = ClientSharedContexts*> T& _sharedContexts() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = UdpClientListener*> T& _listener() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = ClientTimeManager*> T& _timeManager() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = IRandomManager*> T& _randomManager() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = ClientIdManager*> T& _idManager() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = ChatManager*> T& _chatManager() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& _onStateEnteredAction() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = Il2CppString*> T& _stepLogName() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = Il2CppList<KeyValuePair2Il2CppString*, EntityBlueprint*>*>*> T& _blueprints() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = IAssetPackBatchRequest*> T& _staticBundleRequest() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = IAssetPackBatchRequest*> T& _bundleRequest() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = bool> T& _updateListenerRemoved() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = bool> T& _isDisconnected() {
		return *(T*)((uintptr_t)this + 0x131);
	}
	template <typename T = float> T& _timeToRepeat() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = bool> T& _isArenaLeaving() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& _progressCrt() {
		return *(T*)((uintptr_t)this + 0x140);
	}

	template <typename T = void> T Disable() {
		return ((T (*)(BaseWorldInitLS*))(Il2CppBase() + 0x1671FF8))(this);
	}
	template <typename T = void> T StartLoadingFromStep() {
		return ((T (*)(BaseWorldInitLS*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T CheckIsWorldNotEmpty(BaseClientWorld* World) {
		return ((T (*)(BaseWorldInitLS*, BaseClientWorld*))(Il2CppBase() + 0x16720E8))(this, World);
	}
	template <typename T = void> T OnConnectedToCoordinator(bool connectToGlobalMap, UdpClientConfig* udpConfig, int64_t userID, int64_t sessionID, int64_t worldID, Il2CppString* sceneName, WorldResourcesType* resourcesType) {
		return ((T (*)(BaseWorldInitLS*, bool, UdpClientConfig*, int64_t, int64_t, int64_t, Il2CppString*, WorldResourcesType*))(Il2CppBase() + 0x16724B4))(this, connectToGlobalMap, udpConfig, userID, sessionID, worldID, sceneName, resourcesType);
	}
	template <typename T = void> T InitManagers() {
		return ((T (*)(BaseWorldInitLS*))(Il2CppBase() + 0x1672538))(this);
	}
	template <typename T = void> T AddUpdateListener() {
		return ((T (*)(BaseWorldInitLS*))(Il2CppBase() + 0x1672700))(this);
	}
	template <typename T = void> T RemoveUpdateListener() {
		return ((T (*)(BaseWorldInitLS*))(Il2CppBase() + 0x16727A8))(this);
	}
	template <typename T = void> T OnUpdate(float deltaTime) {
		return ((T (*)(BaseWorldInitLS*, float))(Il2CppBase() + 0x0))(this, deltaTime);
	}
	template <typename T = void> T Clean() {
		return ((T (*)(BaseWorldInitLS*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnDisconnectHandler(uintptr_t reason) {
		return ((T (*)(BaseWorldInitLS*, uintptr_t))(Il2CppBase() + 0x1672854))(this, reason);
	}
	template <typename T = void> T CheckToRepeatAfterFail(Il2CppString* reasonForAnalytics) {
		return ((T (*)(BaseWorldInitLS*, Il2CppString*))(Il2CppBase() + 0x1673218))(this, reasonForAnalytics);
	}
	template <typename T = void> T CheckForReloginTimeout(float deltaTime) {
		return ((T (*)(BaseWorldInitLS*, float))(Il2CppBase() + 0x1673344))(this, deltaTime);
	}
	template <typename T = uintptr_t> T SceneLoad(BaseClientWorld* world) {
		return ((T (*)(BaseWorldInitLS*, BaseClientWorld*))(Il2CppBase() + 0x1673534))(this, world);
	}
	template <typename T = uintptr_t> T LoadAssetBundle(BaseClientWorld* world) {
		return ((T (*)(BaseWorldInitLS*, BaseClientWorld*))(Il2CppBase() + 0x16735C8))(this, world);
	}
	template <typename T = void> T OnAssetBundleError() {
		return ((T (*)(BaseWorldInitLS*))(Il2CppBase() + 0x167365C))(this);
	}
	template <typename T = void> T OnDisconnectHandlerb__36_0(int32_t result) {
		return ((T (*)(BaseWorldInitLS*, int32_t))(Il2CppBase() + 0x16736DC))(this, result);
	}
	template <typename T = void> T OnDisconnectHandlerb__36_1(int32_t result) {
		return ((T (*)(BaseWorldInitLS*, int32_t))(Il2CppBase() + 0x1673838))(this, result);
	}

};

