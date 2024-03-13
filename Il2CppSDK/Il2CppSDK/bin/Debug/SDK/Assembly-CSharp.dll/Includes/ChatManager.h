#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChatManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatManager"));
	}

	template <typename T = uintptr_t> T& _rClient() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _client() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _mucManager() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _rosterManager() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _presenceManager() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& _isConnected() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = ICommonLogger*> static T& _logger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = AppController*> T& _appController() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, ChatRoom*>*> T& _connectedRooms() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Queue1ChatRoom*>*> T& _roomsToEnter() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Queue1ChatRoom*>*> T& _roomsToExit() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Queue1uintptr_t>*> static T& _toExecuteInMainThread() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _buffer() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = Il2CppDictionary<Il2CppString*, ChatRoom*>*> T get_ConnectedRooms() {
		return ((T (*)(ChatManager*))(Il2CppBase() + 0x13F9E18))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ChatManager*))(Il2CppBase() + 0x13F9E20))(this);
	}
	template <typename T = void> T Init(AppController* appContorller, ICommonLogger* logger) {
		return ((T (*)(ChatManager*, AppController*, ICommonLogger*))(Il2CppBase() + 0x13F9E94))(this, appContorller, logger);
	}
	template <typename T = void> T OnUpdate(float deltaTime) {
		return ((T (*)(ChatManager*, float))(Il2CppBase() + 0x13F9F20))(this, deltaTime);
	}
	template <typename T = void> static T ExecuteInMainThread(uintptr_t toInvoke) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x13FAFAC))(0, toInvoke);
	}
	template <typename T = void> T Connect() {
		return ((T (*)(ChatManager*))(Il2CppBase() + 0x13FB18C))(this);
	}
	template <typename T = void> T Login() {
		return ((T (*)(ChatManager*))(Il2CppBase() + 0x13FB564))(this);
	}
	template <typename T = void> T client_OnAuthError(Il2CppObject* sender, uintptr_t e) {
		return ((T (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x13FC7B0))(this, sender, e);
	}
	template <typename T = void> T client_OnError(Il2CppObject* sender, uintptr_t e) {
		return ((T (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x13FCC20))(this, sender, e);
	}
	template <typename T = void> T client_OnBind(Il2CppObject* sender, uintptr_t jidEvent) {
		return ((T (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x13FCE08))(this, sender, jidEvent);
	}
	template <typename T = void> T client_OnSendXml(Il2CppObject* sender, uintptr_t e) {
		return ((T (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x13FCE68))(this, sender, e);
	}
	template <typename T = void> T client_OnReceiveXml(Il2CppObject* sender, uintptr_t e) {
		return ((T (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x13FCEE0))(this, sender, e);
	}
	template <typename T = void> T client_OnPresence(Il2CppObject* sender, uintptr_t e) {
		return ((T (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x13FCF58))(this, sender, e);
	}
	template <typename T = void> T client_OnMessage(Il2CppObject* sender, uintptr_t e) {
		return ((T (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x13FD20C))(this, sender, e);
	}
	template <typename T = void> T client_OnIq(Il2CppObject* sender, uintptr_t e) {
		return ((T (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x13FD784))(this, sender, e);
	}
	template <typename T = void> T client_OnRosterStart(Il2CppObject* sender, uintptr_t e) {
		return ((T (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x13FD7E4))(this, sender, e);
	}
	template <typename T = void> T client_OnRosterItem(Il2CppObject* sender, uintptr_t e) {
		return ((T (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x13FD828))(this, sender, e);
	}
	template <typename T = void> T client_OnRosterEnd(Il2CppObject* sender, uintptr_t e) {
		return ((T (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x13FDBC0))(this, sender, e);
	}
	template <typename T = void> T client_OnLogin(Il2CppObject* sender, uintptr_t e) {
		return ((T (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x13FE144))(this, sender, e);
	}
	template <typename T = void> T client_OnClose(Il2CppObject* sender, uintptr_t e) {
		return ((T (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x13FE188))(this, sender, e);
	}
	template <typename T = void> T client_OnBeforeSasl(Il2CppObject* sender, uintptr_t e) {
		return ((T (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x13FE1E8))(this, sender, e);
	}
	template <typename T = void> T presence_OnSubscribe(Il2CppObject* sender, uintptr_t args) {
		return ((T (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x13FE248))(this, sender, args);
	}
	template <typename T = void> T Register() {
		return ((T (*)(ChatManager*))(Il2CppBase() + 0x13FC104))(this);
	}
	template <typename T = void> T rClient_OnRegisterInformation(Il2CppObject* sender, uintptr_t e) {
		return ((T (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x13FE360))(this, sender, e);
	}
	template <typename T = void> T rClient_OnRegister(Il2CppObject* sender, uintptr_t e) {
		return ((T (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x13FE474))(this, sender, e);
	}
	template <typename T = void> T rClient_OnRegisterError(Il2CppObject* sender, uintptr_t e) {
		return ((T (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x13FE5C4))(this, sender, e);
	}
	template <typename T = void> T EnterRoom(ChatRoom* room) {
		return ((T (*)(ChatManager*, ChatRoom*))(Il2CppBase() + 0x13FA8F4))(this, room);
	}
	template <typename T = void> T ExitRoom(ChatRoom* room) {
		return ((T (*)(ChatManager*, ChatRoom*))(Il2CppBase() + 0x13FA2B8))(this, room);
	}
	template <typename T = void> T SendRoomMessage(Il2CppString* message, ChatRoom* room, int64_t playerId, Il2CppString* playerName) {
		return ((T (*)(ChatManager*, Il2CppString*, ChatRoom*, int64_t, Il2CppString*))(Il2CppBase() + 0x13FE8CC))(this, message, room, playerId, playerName);
	}
	template <typename T = void> T SendChatMessage(Il2CppString* message, ChatRoom* room, Il2CppString* to, Il2CppString* from, int64_t playerId, Il2CppString* playerName) {
		return ((T (*)(ChatManager*, Il2CppString*, ChatRoom*, Il2CppString*, Il2CppString*, int64_t, Il2CppString*))(Il2CppBase() + 0x13FF108))(this, message, room, to, from, playerId, playerName);
	}
	template <typename T = void> T Close() {
		return ((T (*)(ChatManager*))(Il2CppBase() + 0x13FC87C))(this);
	}
	template <typename T = void> T AddContact(Il2CppString* jid, Il2CppString* playerName, Il2CppArray<uintptr_t>* groups) {
		return ((T (*)(ChatManager*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1400038))(this, jid, playerName, groups);
	}
	template <typename T = void> T UpdateContact(Il2CppString* jid, Il2CppString* playerName, Il2CppArray<uintptr_t>* groups) {
		return ((T (*)(ChatManager*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1400588))(this, jid, playerName, groups);
	}
	template <typename T = void> T RemoveContact(Il2CppString* jid) {
		return ((T (*)(ChatManager*, Il2CppString*))(Il2CppBase() + 0x1400A74))(this, jid);
	}
	template <typename T = void> T RecoverChatHistory(Il2CppString* jid) {
		return ((T (*)(ChatManager*, Il2CppString*))(Il2CppBase() + 0x13FDCC4))(this, jid);
	}
	template <typename T = void> T StoreMessages(Il2CppString* jid) {
		return ((T (*)(ChatManager*, Il2CppString*))(Il2CppBase() + 0x13FFA70))(this, jid);
	}
	template <typename T = void> T Log(Il2CppString* message) {
		return ((T (*)(ChatManager*, Il2CppString*))(Il2CppBase() + 0x13FB4E0))(this, message);
	}
	template <typename T = void> T Loginb__20_0(Il2CppObject* sender, uintptr_t args) {
		return ((T (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x1401168))(this, sender, args);
	}
	template <typename T = void> T Loginb__20_1(Il2CppObject* sender, uintptr_t args) {
		return ((T (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x140127C))(this, sender, args);
	}
	template <typename T = void> T Loginb__20_2(Il2CppObject* sender, uintptr_t args) {
		return ((T (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x1401390))(this, sender, args);
	}
	template <typename T = void> T Loginb__20_3(Il2CppObject* sender, uintptr_t args) {
		return ((T (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x14014A4))(this, sender, args);
	}
	template <typename T = void> T Loginb__20_4(Il2CppObject* sender, uintptr_t args) {
		return ((T (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x14015B8))(this, sender, args);
	}
	template <typename T = void> T Loginb__20_5(Il2CppObject* sender, uintptr_t args) {
		return ((T (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x14016CC))(this, sender, args);
	}
	template <typename T = void> T Loginb__20_6(Il2CppObject* sender, uintptr_t args) {
		return ((T (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x14017E0))(this, sender, args);
	}
	template <typename T = void> T Loginb__20_7(Il2CppObject* sender, uintptr_t args) {
		return ((T (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x14018F4))(this, sender, args);
	}
	template <typename T = void> T Loginb__20_8(Il2CppObject* sender, uintptr_t args) {
		return ((T (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x1401A08))(this, sender, args);
	}
	template <typename T = void> T Loginb__20_9(Il2CppObject* sender, uintptr_t args) {
		return ((T (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x1401B1C))(this, sender, args);
	}
	template <typename T = void> T Loginb__20_10(Il2CppObject* sender, uintptr_t args) {
		return ((T (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x1401C30))(this, sender, args);
	}
	template <typename T = void> T Registerb__36_0(Il2CppObject* sender, uintptr_t args) {
		return ((T (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x1401D44))(this, sender, args);
	}
	template <typename T = void> T Registerb__36_1(Il2CppObject* sender, uintptr_t args) {
		return ((T (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x1401E58))(this, sender, args);
	}
	template <typename T = void> T Registerb__36_3(Il2CppObject* sender, uintptr_t args) {
		return ((T (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x1401F6C))(this, sender, args);
	}
	template <typename T = void> T Registerb__36_4(Il2CppObject* sender, uintptr_t args) {
		return ((T (*)(ChatManager*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x1401FCC))(this, sender, args);
	}

};

