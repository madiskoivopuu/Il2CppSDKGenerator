#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ArenaUnityController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArenaUnityController"));
	}

	template <typename R = Il2CppString*> static R& GlobalMapName() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& Home() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ClientAnalyticsManager*> R& _analyticsManager() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = ClientDataContexts*> R& _dataContexts() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = ClientSharedContexts*> R& _sharedContexts() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = LogManager*> R& _logManager() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = ClientTimeManager*> R& _timeManager() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = ITriggerTransition*> R& _stateMachine() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = UIWindowsManager*> R& _windowsManager() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = ChatManager*> R& _chatManager() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& _onStateEnteredAction() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = bool> R& _isDisconnected() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	 Il2CppList<KeyValuePair2<Il2CppString*, EntityBlueprint*>*>*& _blueprints() {
		return *(Il2CppList<KeyValuePair2<Il2CppString*, EntityBlueprint*>*>**)((uintptr_t)this + 0x60);
	}
	template <typename R = uintptr_t> R& _createWorld() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = bool> R& _isWorldCreated() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = bool> R& _isWorldCreating() {
		return *(R*)((uintptr_t)this + 0x71);
	}

	template <typename R = uintptr_t> R Enter(Transition* transition) {
		return ((R (*)(ArenaUnityController*, Transition*))(Il2CppBase() + 0xF47C10))(this, transition);
	}
	template <typename R = uintptr_t> R LoadAssetBundle() {
		return ((R (*)(ArenaUnityController*))(Il2CppBase() + 0xF47CA4))(this);
	}
	template <typename R = uintptr_t> R CreateWorld() {
		return ((R (*)(ArenaUnityController*))(Il2CppBase() + 0xF47D00))(this);
	}
	template <typename R = uintptr_t> R Exit(Transition* transition) {
		return ((R (*)(ArenaUnityController*, Transition*))(Il2CppBase() + 0xF47D78))(this, transition);
	}
	template <typename R = void> R SetStateMachine(ITriggerTransition* stateMachine) {
		return ((R (*)(ArenaUnityController*, ITriggerTransition*))(Il2CppBase() + 0xF47DF0))(this, stateMachine);
	}
	template <typename R = void> R OnUpdate(float deltaTime) {
		return ((R (*)(ArenaUnityController*, float))(Il2CppBase() + 0xF47DF8))(this, deltaTime);
	}
	template <typename R = void> R Clean() {
		return ((R (*)(ArenaUnityController*))(Il2CppBase() + 0xF47FA4))(this);
	}

};

