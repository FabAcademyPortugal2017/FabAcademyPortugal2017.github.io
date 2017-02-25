var ganttData = [
	{
		id: 1, name: "plano 1", series: [
			{ name: "Planned", start: new Date(2017,00,25), end: new Date(2017,00,26) },
			{ name: "Actual", start: new Date(2017,00,02), end: new Date(2017,00,05), color: "#f0f0f0" }
		]
	}, 
	{
		id: 2, name: "plano 2", series: [
			{ name: "Planned", start: new Date(2017,00,05), end: new Date(2017,00,20) },
			{ name: "Actual", start: new Date(2017,00,06), end: new Date(2017,00,17), color: "#f0f0f0" },
			{ name: "Projected", start: new Date(2017,00,06), end: new Date(2017,00,17), color: "#e0e0e0" }
		]
	}, 
	{
		id: 3, name: "Feature 3", series: [
			{ name: "Planned", start: new Date(2017,00,11), end: new Date(2017,01,03) },
			{ name: "Actual", start: new Date(2017,00,15), end: new Date(2017,01,03), color: "#f0f0f0" }
		]
	}, 
	{
		id: 4, name: "Feature 4", series: [
			{ name: "Planned", start: new Date(2017,01,01), end: new Date(2017,01,03) },
			{ name: "Actual", start: new Date(2017,01,01), end: new Date(2017,01,05), color: "#f0f0f0" }
		]
	},
	{
		id: 5, name: "Feature 5", series: [
			{ name: "Planned", start: new Date(2017,02,01), end: new Date(2017,03,20) },
			{ name: "Actual", start: new Date(2017,02,01), end: new Date(2017,03,26), color: "#f0f0f0" }
		]
	}, 
	{
		id: 6, name: "Feature 6", series: [
			{ name: "Planned", start: new Date(2017,00,05), end: new Date(2017,00,20) },
			{ name: "Actual", start: new Date(2017,00,06), end: new Date(2017,00,17), color: "#f0f0f0" },
			{ name: "Projected", start: new Date(2017,00,06), end: new Date(2017,00,20), color: "#e0e0e0" }
		]
	}, 
	{
		id: 7, name: "Feature 7", series: [
			{ name: "Planned", start: new Date(2017,00,11), end: new Date(2017,01,03) }
		]
	}, 
	{
		id: 8, name: "Feature 8", series: [
			{ name: "Planned", start: new Date(2017,01,01), end: new Date(2017,01,03) },
			{ name: "Actual", start: new Date(2017,01,01), end: new Date(2017,01,05), color: "#f0f0f0" }
		]
	}
];