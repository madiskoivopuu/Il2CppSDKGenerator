#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MapUnityController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapUnityController"));
	}

	template <typename T = ClientAnalyticsManager*> T& _analyticsManager() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = ClientDataContexts*> T& _dataContexts() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = ClientSharedContexts*> T& _sharedContexts() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = ClientTimeManager*> T& _timeManager() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = LogManager*> T& _logManager() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = ITriggerTransition*> T& _stateMachine() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = UIWindowsManager*> T& _windowsManager() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = ChatManager*> T& _chatManager() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& _isDisconnected() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> static T& GlobalMapName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& _onStateEnteredAction() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppList<KeyValuePair2Il2CppString*, EntityBlueprint*>*>*> T& _blueprints() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& _createWorld() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& _isWorldCreated() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& _isWorldCreating() {
		return *(T*)((uintptr_t)this + 0x71);
	}

	template <typename T = uintptr_t> T Enter(Transition* transition) {
		return ((T (*)(MapUnityController*, Transition*))(Il2CppBase() + 0x12C6368))(this, transition);
	}
	template <typename T = uintptr_t> T LoadAssetBundle(BaseClientWorld* world) {
		return ((T (*)(MapUnityController*, BaseClientWorld*))(Il2CppBase() + 0x12C63FC))(this, world);
	}
	template <typename T = uintptr_t> T CreateWorld() {
		return ((T (*)(MapUnityController*))(Il2CppBase() + 0x12C6458))(this);
	}
	template <typename T = uintptr_t> T Exit(Transition* transition) {
		return ((T (*)(MapUnityController*, Transition*))(Il2CppBase() + 0x12C64D0))(this, transition);
	}
	template <typename T = void> T SetStateMachine(ITriggerTransition* stateMachine) {
		return ((T (*)(MapUnityController*, ITriggerTransition*))(Il2CppBase() + 0x12C6548))(this, stateMachine);
	}
	template <typename T = void> T OnUpdate(float deltaTime) {
		return ((T (*)(MapUnityController*, float))(Il2CppBase() + 0x12C6550))(this, deltaTime);
	}
	template <typename T = void> T Clean() {
		return ((T (*)(MapUnityController*))(Il2CppBase() + 0x12C66FC))(this);
	}

};

